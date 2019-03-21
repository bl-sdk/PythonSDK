#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryCustomPropertyEditorDelegate()
{
    class_< UActorFactoryCustomPropertyEditorDelegate, bases< UObject >  , boost::noncopyable>("UActorFactoryCustomPropertyEditorDelegate", no_init)
        .def("StaticClass", &UActorFactoryCustomPropertyEditorDelegate::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}