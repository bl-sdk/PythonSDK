#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ForceGarbageCollection()
{
    py::class_< USeqAct_ForceGarbageCollection,  USeqAct_Latent   >("USeqAct_ForceGarbageCollection")
        .def("StaticClass", &USeqAct_ForceGarbageCollection::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}