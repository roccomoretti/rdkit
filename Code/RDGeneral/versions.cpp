#include <RDGeneral/versions.h>

const char * RDKit::rdkitVersion = "2020.03.2";

// The Boost version as detected at build time.
// CMake's Boost_LIB_VERSION is defined by the FindBoost.cmake module
// to be the same as the value from <boost/version.hpp>
const char * RDKit::boostVersion = "1_71";

// The system/compiler on which RDKit was built as detected at build time.
const char * RDKit::rdkitBuild = "Rosetta-connected_build";
