#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTextMarkupDictionary()
{
    class_< UTextMarkupDictionary, bases< UGBXDefinition >  , boost::noncopyable>("UTextMarkupDictionary", no_init)
        .def_readwrite("Dictionary", &UTextMarkupDictionary::Dictionary)
        .def("StaticClass", &UTextMarkupDictionary::StaticClass, return_value_policy< reference_existing_object >())
        .def("ResolveCustomMarkupString", &UTextMarkupDictionary::ResolveCustomMarkupString)
        .staticmethod("StaticClass")
  ;
}