#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UStringsTag()
{
    class_< UStringsTag, bases< UTranslatorTag >  , boost::noncopyable>("UStringsTag", no_init)
        .def("StaticClass", &UStringsTag::StaticClass, return_value_policy< reference_existing_object >())
        .def("Translate", &UStringsTag::Translate)
        .staticmethod("StaticClass")
  ;
}