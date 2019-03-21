#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCreditsDataProviderGFxObject()
{
    class_< UCreditsDataProviderGFxObject, bases< UGFxObject >  , boost::noncopyable>("UCreditsDataProviderGFxObject", no_init)
        .def_readwrite("CreditsDef", &UCreditsDataProviderGFxObject::CreditsDef)
        .def_readwrite("bShouldAvoidAccentedLetters", &UCreditsDataProviderGFxObject::bShouldAvoidAccentedLetters)
        .def("StaticClass", &UCreditsDataProviderGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("extGetLengthOfData", &UCreditsDataProviderGFxObject::extGetLengthOfData)
        .def("ReplaceCertainAccentedLetters", &UCreditsDataProviderGFxObject::ReplaceCertainAccentedLetters)
        .def("extGetClipDataAt", &UCreditsDataProviderGFxObject::extGetClipDataAt, return_value_policy< reference_existing_object >())
        .def("Init", &UCreditsDataProviderGFxObject::Init)
        .staticmethod("StaticClass")
  ;
}