#pragma once

////////// Public Settings \\\\\\\\\\

//////////////////////////////////////////////////////////////////////////
// Config options for operators

// no need to define AVX512 here anymore, just change the project settings to use the AVX512 version
// random seed is now obtained from spectrumDigests

#define MAX_NUMBER_OF_PROCESSORS 32
#define NUMBER_OF_SOLUTION_PROCESSORS 4 // do not increase this for this epoch, because there may be issues due too fast ticking

#define USE_SCORE_CACHE 1
#define SCORE_CACHE_SIZE 1000000 // the larger the better
#define SCORE_CACHE_COLLISION_RETRIES 20 // number of retries to find entry in cache in case of hash collision

// Number of ticks to from prior epoch that are kept after seamless epoch transition. These can be requested after transition.
#define TICKS_TO_KEEP_FROM_PRIOR_EPOCH 100

#define TARGET_TICK_DURATION 2500
#define TRANSACTION_SPARSENESS 4


//////////////////////////////////////////////////////////////////////////
// Config options that should NOT be changed by operators

#define VERSION_A 1
#define VERSION_B 195
#define VERSION_C 0

#define EPOCH 99
#define TICK 12795000

#define ARBITRATOR "AFZPUAIYVPNUYGJRQVLUKOPPVLHAZQTGLYAAUUNBXFTVTAMSBKQBLEIEPCVJ"

static unsigned short SYSTEM_FILE_NAME[] = L"system";
static unsigned short SPECTRUM_FILE_NAME[] = L"spectrum.???";
static unsigned short UNIVERSE_FILE_NAME[] = L"universe.???";
static unsigned short SCORE_CACHE_FILE_NAME[] = L"score.???";
static unsigned short CONTRACT_FILE_NAME[] = L"contract????.???";

#define DATA_LENGTH 256
#define INFO_LENGTH 128
#define NUMBER_OF_INPUT_NEURONS 1024
#define NUMBER_OF_OUTPUT_NEURONS 1024
#define MAX_INPUT_DURATION 256
#define MAX_OUTPUT_DURATION 256
#define NEURON_VALUE_LIMIT 1099511627776LL
#define SOLUTION_THRESHOLD_DEFAULT 45

// include commonly needed definitions
#include "network_messages/common_def.h"

#define MAX_NUMBER_OF_TICKS_PER_EPOCH (((((60 * 60 * 24 * 7) / (TARGET_TICK_DURATION / 1000)) + NUMBER_OF_COMPUTORS - 1) / NUMBER_OF_COMPUTORS) * NUMBER_OF_COMPUTORS)
