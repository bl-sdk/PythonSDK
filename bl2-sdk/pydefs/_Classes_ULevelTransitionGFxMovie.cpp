#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelTransitionGFxMovie(py::module &m)
{
    py::class_< ULevelTransitionGFxMovie,  UWillowGFxMovie   >(m, "ULevelTransitionGFxMovie")
        .def("StaticClass", &ULevelTransitionGFxMovie::StaticClass, py::return_value_policy::reference)
          ;
}