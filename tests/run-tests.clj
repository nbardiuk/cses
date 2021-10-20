(ns run-tests
  (:require
   [clojure.java.shell :refer [sh]]
   [clojure.edn :as edn]
   [clojure.string :as str]
   [clojure.test :refer [is deftest run-tests testing successful?]]))

(deftest testing-scenarios
  (let [[solution scenarios] *command-line-args*]
    (testing solution
      (doseq [{:keys [scenario input expected]} (edn/read-string (slurp scenarios))
              :let [{:keys [exit out err]} (sh solution :in input)
                    actual (str/trimr out)]]
        (testing scenario
          (is (zero? exit))
          (is (empty? err))
          (is (= expected actual)))))))

(when-not (successful? (run-tests))
  (System/exit 1))
