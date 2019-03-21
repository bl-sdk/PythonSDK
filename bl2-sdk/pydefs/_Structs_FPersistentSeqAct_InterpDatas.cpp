#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPersistentSeqAct_InterpData()
{
    py::class_< FPersistentSeqAct_InterpData,  FPersistentData   >("FPersistentSeqAct_InterpData")
        .def_readwrite("Position", &FPersistentSeqAct_InterpData::Position)
  ;
}