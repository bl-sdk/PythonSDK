#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UEditorLinkSelectionInterface()
{
    class_< UEditorLinkSelectionInterface, bases< UInterface >  , boost::noncopyable>("UEditorLinkSelectionInterface", no_init)
        .def("StaticClass", &UEditorLinkSelectionInterface::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}