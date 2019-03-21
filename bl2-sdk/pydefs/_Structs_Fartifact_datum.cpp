#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_Fartifact_datum()
{
    py::class_< Fartifact_datum >("Fartifact_datum")
        .def_readwrite("SkillIndex", &Fartifact_datum::SkillIndex)
        .def_readwrite("Grade", &Fartifact_datum::Grade)
        .def_readwrite("Name", &Fartifact_datum::Name)
  ;
}