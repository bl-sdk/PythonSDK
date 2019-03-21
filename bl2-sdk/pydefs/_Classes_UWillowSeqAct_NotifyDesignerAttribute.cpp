#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_NotifyDesignerAttribute()
{
    class_< UWillowSeqAct_NotifyDesignerAttribute, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_NotifyDesignerAttribute", no_init)
        .def_readwrite("AttributeName", &UWillowSeqAct_NotifyDesignerAttribute::AttributeName)
        .def_readwrite("OptionalAttributeDefinition", &UWillowSeqAct_NotifyDesignerAttribute::OptionalAttributeDefinition)
        .def("StaticClass", &UWillowSeqAct_NotifyDesignerAttribute::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &UWillowSeqAct_NotifyDesignerAttribute::eventActivated)
        .staticmethod("StaticClass")
  ;
}