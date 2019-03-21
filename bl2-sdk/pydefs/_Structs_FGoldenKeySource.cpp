#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGoldenKeySource()
{
    class_< FGoldenKeySource >("FGoldenKeySource", no_init)
        .def_readwrite("SourceId", &FGoldenKeySource::SourceId)
        .def_readwrite("NumKeys", &FGoldenKeySource::NumKeys)
        .def_readwrite("NumKeysSpent", &FGoldenKeySource::NumKeysSpent)
        .def_readwrite("Empty", &FGoldenKeySource::Empty)
  ;
}