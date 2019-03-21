#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIStateBase()
{
    py::class_< UAIStateBase,  UGearboxEditorNode   >("UAIStateBase")
        .def("StaticClass", &UAIStateBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}