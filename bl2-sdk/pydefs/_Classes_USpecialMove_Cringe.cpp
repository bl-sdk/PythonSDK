#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_Cringe(py::module &m)
{
    py::class_< USpecialMove_Cringe,  UWillowAnimDefinition   >(m, "USpecialMove_Cringe")
        .def_readwrite("CringeAnim", &USpecialMove_Cringe::CringeAnim)
        .def_readwrite("CringeTime", &USpecialMove_Cringe::CringeTime)
        .def("PlayAnim", &USpecialMove_Cringe::PlayAnim)
          ;
}