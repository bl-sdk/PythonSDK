#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetAnimTree()
{
    class_< UBehavior_SetAnimTree, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetAnimTree", no_init)
        .def_readwrite("AnimTreeTemplate", &UBehavior_SetAnimTree::AnimTreeTemplate)
        .def("StaticClass", &UBehavior_SetAnimTree::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetAnimTree::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}