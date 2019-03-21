#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendByPosture()
{
    py::class_< UAnimNodeBlendByPosture,  UAnimNodeBlendList   >("UAnimNodeBlendByPosture")
        .def("StaticClass", &UAnimNodeBlendByPosture::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}