#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxEngine()
{
    py::class_< UGFxEngine,  UObject   >("UGFxEngine")
        .def_readwrite("GCReferences", &UGFxEngine::GCReferences)
        .def_readwrite("RefCount", &UGFxEngine::RefCount)
        .def("StaticClass", &UGFxEngine::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}