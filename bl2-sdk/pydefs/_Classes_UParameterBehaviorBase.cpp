#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParameterBehaviorBase()
{
    class_< UParameterBehaviorBase, bases< UBehaviorBase >  , boost::noncopyable>("UParameterBehaviorBase", no_init)
        .def_readwrite("ParameterName", &UParameterBehaviorBase::ParameterName)
        .def_readwrite("SectionIndex", &UParameterBehaviorBase::SectionIndex)
        .def("StaticClass", &UParameterBehaviorBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}