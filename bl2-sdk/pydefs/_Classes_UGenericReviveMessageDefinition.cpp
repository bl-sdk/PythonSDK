#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGenericReviveMessageDefinition()
{
    class_< UGenericReviveMessageDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UGenericReviveMessageDefinition", no_init)
        .def_readwrite("Message_Self", &UGenericReviveMessageDefinition::Message_Self)
        .def_readwrite("Message_Other", &UGenericReviveMessageDefinition::Message_Other)
        .def("StaticClass", &UGenericReviveMessageDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}