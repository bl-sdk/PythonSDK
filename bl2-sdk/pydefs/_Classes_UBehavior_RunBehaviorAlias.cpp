#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_RunBehaviorAlias()
{
    class_< UBehavior_RunBehaviorAlias, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_RunBehaviorAlias", no_init)
        .def_readwrite("BehaviorAlias", &UBehavior_RunBehaviorAlias::BehaviorAlias)
        .def_readwrite("AliasSelfContext", &UBehavior_RunBehaviorAlias::AliasSelfContext)
        .def_readwrite("AliasMyInstigatorContext", &UBehavior_RunBehaviorAlias::AliasMyInstigatorContext)
        .def_readwrite("AliasOtherEventParticipantContext", &UBehavior_RunBehaviorAlias::AliasOtherEventParticipantContext)
        .def("StaticClass", &UBehavior_RunBehaviorAlias::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}