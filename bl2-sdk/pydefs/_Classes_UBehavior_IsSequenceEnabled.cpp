#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_IsSequenceEnabled()
{
    class_< UBehavior_IsSequenceEnabled, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_IsSequenceEnabled", no_init)
        .def_readwrite("SequenceName", &UBehavior_IsSequenceEnabled::SequenceName)
        .def_readwrite("SequenceProvider", &UBehavior_IsSequenceEnabled::SequenceProvider)
        .def_readwrite("ProviderDefinitionPathName", &UBehavior_IsSequenceEnabled::ProviderDefinitionPathName)
        .def("StaticClass", &UBehavior_IsSequenceEnabled::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_IsSequenceEnabled::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}