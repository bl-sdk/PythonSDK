#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULocalTrainingDefinitionMessage()
{
    class_< ULocalTrainingDefinitionMessage, bases< UWillowLocalMessage >  , boost::noncopyable>("ULocalTrainingDefinitionMessage", no_init)
        .def("StaticClass", &ULocalTrainingDefinitionMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("ClientTrainingDefinitionReceive", &ULocalTrainingDefinitionMessage::ClientTrainingDefinitionReceive)
        .staticmethod("StaticClass")
  ;
}