#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_RandomBranch()
{
    class_< UBehavior_RandomBranch, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_RandomBranch", no_init)
        .def_readwrite("Conditions", &UBehavior_RandomBranch::Conditions)
        .def("StaticClass", &UBehavior_RandomBranch::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_RandomBranch::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}