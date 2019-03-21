#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_DropItems()
{
    class_< UBehavior_DropItems, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_DropItems", no_init)
        .def_readwrite("ItemDropOffset", &UBehavior_DropItems::ItemDropOffset)
        .def_readwrite("ItemDropVelocity", &UBehavior_DropItems::ItemDropVelocity)
        .def_readwrite("ItemScatterOffset", &UBehavior_DropItems::ItemScatterOffset)
        .def_readwrite("CustomDirection", &UBehavior_DropItems::CustomDirection)
        .def_readwrite("CustomVelocity", &UBehavior_DropItems::CustomVelocity)
        .def_readwrite("Torque", &UBehavior_DropItems::Torque)
        .def("StaticClass", &UBehavior_DropItems::StaticClass, return_value_policy< reference_existing_object >())
        .def("DropItems", &UBehavior_DropItems::DropItems)
        .def("ApplyBehaviorToContext", &UBehavior_DropItems::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}