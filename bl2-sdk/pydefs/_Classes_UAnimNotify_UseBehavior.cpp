#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_UseBehavior()
{
    class_< UAnimNotify_UseBehavior, bases< UAnimNotify >  , boost::noncopyable>("UAnimNotify_UseBehavior", no_init)
        .def_readwrite("Behaviors", &UAnimNotify_UseBehavior::Behaviors)
        .def_readwrite("InstigatorContextForBehavior", &UAnimNotify_UseBehavior::InstigatorContextForBehavior)
        .def("StaticClass", &UAnimNotify_UseBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("PreTestNotify", &UAnimNotify_UseBehavior::PreTestNotify)
        .staticmethod("StaticClass")
  ;
}