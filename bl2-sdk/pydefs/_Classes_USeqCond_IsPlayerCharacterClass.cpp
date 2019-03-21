#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_IsPlayerCharacterClass()
{
    class_< USeqCond_IsPlayerCharacterClass, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_IsPlayerCharacterClass", no_init)
        .def("StaticClass", &USeqCond_IsPlayerCharacterClass::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}