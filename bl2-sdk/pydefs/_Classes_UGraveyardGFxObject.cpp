#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGraveyardGFxObject()
{
    class_< UGraveyardGFxObject, bases< UGFxObject >  , boost::noncopyable>("UGraveyardGFxObject", no_init)
        .def("StaticClass", &UGraveyardGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("Hide", &UGraveyardGFxObject::Hide)
        .def("Show", &UGraveyardGFxObject::Show)
        .def("SetTombstoneInfo", &UGraveyardGFxObject::SetTombstoneInfo)
        .staticmethod("StaticClass")
  ;
}