#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_Cringe(py::module &m)
{
    py::class_< USpecialMove_Cringe,  UWillowAnimDefinition   >(m, "USpecialMove_Cringe")
        .def_readwrite("CringeAnim", &USpecialMove_Cringe::CringeAnim)
        .def_readwrite("CringeTime", &USpecialMove_Cringe::CringeTime)
        .def("StaticClass", &USpecialMove_Cringe::StaticClass, py::return_value_policy::reference)
        .def("PlayAnim", &USpecialMove_Cringe::PlayAnim)
          ;
}