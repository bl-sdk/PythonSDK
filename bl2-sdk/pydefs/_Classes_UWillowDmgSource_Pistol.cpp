#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Pistol(py::object m)
{
    py::class_< UWillowDmgSource_Pistol,  UWillowDmgSource_Bullet   >(m, "UWillowDmgSource_Pistol")
        .def("StaticClass", &UWillowDmgSource_Pistol::StaticClass, py::return_value_policy::reference)
          ;
}