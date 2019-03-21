#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUICharacterSummary()
{
    class_< UUICharacterSummary, bases< UUIResourceDataProvider >  , boost::noncopyable>("UUICharacterSummary", no_init)
        .def_readwrite("ClassPathName", &UUICharacterSummary::ClassPathName)
        .def_readwrite("CharacterName", &UUICharacterSummary::CharacterName)
        .def_readwrite("CharacterBio", &UUICharacterSummary::CharacterBio)
        .def("StaticClass", &UUICharacterSummary::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventIsProviderDisabled", &UUICharacterSummary::eventIsProviderDisabled)
        .staticmethod("StaticClass")
  ;
}