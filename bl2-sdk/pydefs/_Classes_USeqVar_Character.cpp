#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_Character()
{
    class_< USeqVar_Character, bases< USeqVar_Object >  , boost::noncopyable>("USeqVar_Character", no_init)
        .def_readwrite("PawnClass", &USeqVar_Character::PawnClass)
        .def("StaticClass", &USeqVar_Character::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}