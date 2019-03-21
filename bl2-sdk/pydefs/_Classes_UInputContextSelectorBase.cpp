#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInputContextSelectorBase()
{
    class_< UInputContextSelectorBase, bases< UObject >  , boost::noncopyable>("UInputContextSelectorBase", no_init)
        .def("StaticClass", &UInputContextSelectorBase::StaticClass, return_value_policy< reference_existing_object >())
        .def("SelectContext", &UInputContextSelectorBase::SelectContext)
        .staticmethod("StaticClass")
  ;
}