#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIAIInterface()
{
    class_< UIAIInterface, bases< UInterface >  , boost::noncopyable>("UIAIInterface", no_init)
        .def("StaticClass", &UIAIInterface::StaticClass, return_value_policy< reference_existing_object >())
        .def("InitSequence", &UIAIInterface::InitSequence)
        .def("GetAllegiance", &UIAIInterface::GetAllegiance, return_value_policy< reference_existing_object >())
        .def("GetAIDefinition", &UIAIInterface::GetAIDefinition, return_value_policy< reference_existing_object >())
        .def("GetAIComponent", &UIAIInterface::GetAIComponent, return_value_policy< reference_existing_object >())
        .def("GetAIParent", &UIAIInterface::GetAIParent, return_value_policy< reference_existing_object >())
        .def("GetAILocation", &UIAIInterface::GetAILocation)
        .def("GetAIActor", &UIAIInterface::GetAIActor, return_value_policy< reference_existing_object >())
        .def("CanTickAI", &UIAIInterface::CanTickAI)
        .staticmethod("StaticClass")
  ;
}