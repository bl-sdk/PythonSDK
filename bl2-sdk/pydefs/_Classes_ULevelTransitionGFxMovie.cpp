#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelTransitionGFxMovie()
{
    py::class_< ULevelTransitionGFxMovie,  UWillowGFxMovie   >("ULevelTransitionGFxMovie")
        .def("StaticClass", &ULevelTransitionGFxMovie::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}