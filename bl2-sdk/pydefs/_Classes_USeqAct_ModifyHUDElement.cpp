#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ModifyHUDElement()
{
    class_< USeqAct_ModifyHUDElement, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ModifyHUDElement", no_init)
        .def_readwrite("HUDElement", &USeqAct_ModifyHUDElement::HUDElement)
        .def_readwrite("ResPoolDefinition", &USeqAct_ModifyHUDElement::ResPoolDefinition)
        .def("StaticClass", &USeqAct_ModifyHUDElement::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}