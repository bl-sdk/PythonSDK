#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowCombatPoint()
{
    class_< AWillowCombatPoint, bases< AActor >  , boost::noncopyable>("AWillowCombatPoint", no_init)
        .def_readwrite("ConstraintType", &AWillowCombatPoint::ConstraintType)
        .def_readwrite("ConstraintTags", &AWillowCombatPoint::ConstraintTags)
        .def("StaticClass", &AWillowCombatPoint::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}