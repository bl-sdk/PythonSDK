#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_BeginLifting()
{
    class_< UBehavior_BeginLifting, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_BeginLifting", no_init)
        .def_readwrite("LifterSkillContext", &UBehavior_BeginLifting::LifterSkillContext)
        .def_readwrite("LifterPawnContext", &UBehavior_BeginLifting::LifterPawnContext)
        .def_readwrite("HeightFromGroundFormula", &UBehavior_BeginLifting::HeightFromGroundFormula)
        .def("StaticClass", &UBehavior_BeginLifting::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_BeginLifting::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}