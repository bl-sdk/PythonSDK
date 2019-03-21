#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTranslationContext()
{
    class_< UTranslationContext, bases< UObject >  , boost::noncopyable>("UTranslationContext", no_init)
        .def_readwrite("TranslatorTags", &UTranslationContext::TranslatorTags)
        .def("StaticClass", &UTranslationContext::StaticClass, return_value_policy< reference_existing_object >())
        .def("RegisterTranslatorTag", &UTranslationContext::RegisterTranslatorTag)
        .staticmethod("StaticClass")
  ;
}