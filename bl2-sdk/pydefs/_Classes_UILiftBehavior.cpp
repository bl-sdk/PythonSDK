#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UILiftBehavior()
{
    class_< UILiftBehavior, bases< UInterface >  , boost::noncopyable>("UILiftBehavior", no_init)
        .def("StaticClass", &UILiftBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("BeginLifting", &UILiftBehavior::BeginLifting)
        .def("FinishLifting", &UILiftBehavior::FinishLifting)
        .def("SelectTarget", &UILiftBehavior::SelectTarget)
        .staticmethod("StaticClass")
  ;
}