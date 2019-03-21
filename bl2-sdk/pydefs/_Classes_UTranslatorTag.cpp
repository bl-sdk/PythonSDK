#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTranslatorTag()
{
    class_< UTranslatorTag, bases< UObject >  , boost::noncopyable>("UTranslatorTag", no_init)
        .def_readwrite("Tag", &UTranslatorTag::Tag)
        .def("StaticClass", &UTranslatorTag::StaticClass, return_value_policy< reference_existing_object >())
        .def("Translate", &UTranslatorTag::Translate)
        .staticmethod("StaticClass")
  ;
}