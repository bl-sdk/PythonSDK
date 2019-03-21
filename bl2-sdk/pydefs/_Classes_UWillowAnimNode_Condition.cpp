#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_Condition()
{
    class_< UWillowAnimNode_Condition, bases< UAnimNodeBlend >  , boost::noncopyable>("UWillowAnimNode_Condition", no_init)
        .def_readwrite("BlendTime", &UWillowAnimNode_Condition::BlendTime)
        .def_readwrite("CheckRate", &UWillowAnimNode_Condition::CheckRate)
        .def_readwrite("FlagCondition", &UWillowAnimNode_Condition::FlagCondition)
        .def_readwrite("LastCheckTime", &UWillowAnimNode_Condition::LastCheckTime)
        .def("StaticClass", &UWillowAnimNode_Condition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}