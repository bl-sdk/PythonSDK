#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGameTypePrefix()
{
    class_< FGameTypePrefix >("FGameTypePrefix", no_init)
        .def_readwrite("Prefix", &FGameTypePrefix::Prefix)
        .def_readwrite("GameType", &FGameTypePrefix::GameType)
        .def_readwrite("AdditionalGameTypes", &FGameTypePrefix::AdditionalGameTypes)
        .def_readwrite("ForcedObjects", &FGameTypePrefix::ForcedObjects)
  ;
}