#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_Fartifact_datum()
{
    class_< Fartifact_datum >("Fartifact_datum", no_init)
        .def_readwrite("SkillIndex", &Fartifact_datum::SkillIndex)
        .def_readwrite("Grade", &Fartifact_datum::Grade)
        .def_readwrite("Name", &Fartifact_datum::Name)
  ;
}