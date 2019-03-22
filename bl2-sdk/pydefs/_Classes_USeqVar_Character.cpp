#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Character(py::module &m)
{
    py::class_< USeqVar_Character,  USeqVar_Object   >(m, "USeqVar_Character")
        .def_readwrite("PawnClass", &USeqVar_Character::PawnClass)
        .def("StaticClass", &USeqVar_Character::StaticClass, py::return_value_policy::reference)
          ;
}