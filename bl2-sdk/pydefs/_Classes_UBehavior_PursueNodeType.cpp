#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_PursueNodeType()
{
    class_< UBehavior_PursueNodeType, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_PursueNodeType", no_init)
        .def_readwrite("NodeType", &UBehavior_PursueNodeType::NodeType)
        .def("StaticClass", &UBehavior_PursueNodeType::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_PursueNodeType::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}