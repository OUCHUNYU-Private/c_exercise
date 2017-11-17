//
// Created by Chunyu Ou on 11/12/17.
//

#include "exercise_helpers/exercise_runner.h"
#include "basic_exercises/exercise_1.h"
#include "basic_exercises/exercise_2.h"
#include "basic_exercises/exercise_3.h"
#include "basic_exercises/exercise_4.h"

int main() {

    run_exercise(1, &exercise_1);
    run_exercise(2, &exercise_2);
    run_exercise(3, &exercise_3);
    run_exercise(4, &exercise_4);

    return 0;
}

