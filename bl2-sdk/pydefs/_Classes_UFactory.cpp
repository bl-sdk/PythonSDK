#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFactory()
{
    class_< UFactory, bases< UObject >  , boost::noncopyable>("UFactory", no_init)
        .def_readwrite("SupportedClass", &UFactory::SupportedClass)
        .def_readwrite("ContextClass", &UFactory::ContextClass)
        .def_readwrite("Description", &UFactory::Description)
        .def_readwrite("Formats", &UFactory::Formats)
        .def_readwrite("AutoPriority", &UFactory::AutoPriority)
        .def_readwrite("ValidGameNames", &UFactory::ValidGameNames)
        .def("StaticClass", &UFactory::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}