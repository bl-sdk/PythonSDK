#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNPCLoadBalancer()
{
    class_< UNPCLoadBalancer, bases< UObject >  , boost::noncopyable>("UNPCLoadBalancer", no_init)
        .def_readwrite("TheList", &UNPCLoadBalancer::TheList)
        .def_readwrite("LastPathTime", &UNPCLoadBalancer::LastPathTime)
        .def_readwrite("NumberNPCsMoving", &UNPCLoadBalancer::NumberNPCsMoving)
        .def_readwrite("LastUpdateTime", &UNPCLoadBalancer::LastUpdateTime)
        .def_readwrite("MaxNumberPathing", &UNPCLoadBalancer::MaxNumberPathing)
        .def_readwrite("TimeBetweenUpdates", &UNPCLoadBalancer::TimeBetweenUpdates)
        .def("StaticClass", &UNPCLoadBalancer::StaticClass, return_value_policy< reference_existing_object >())
        .def("CheckPathing", &UNPCLoadBalancer::CheckPathing)
        .def("WantsToPath", &UNPCLoadBalancer::WantsToPath)
        .def("PathFailed", &UNPCLoadBalancer::PathFailed)
        .def("ClearList", &UNPCLoadBalancer::ClearList)
        .def("OnPerch", &UNPCLoadBalancer::OnPerch)
        .def("IsPathing", &UNPCLoadBalancer::IsPathing)
        .def("CanContinuePath", &UNPCLoadBalancer::CanContinuePath)
        .def("CanStartPath", &UNPCLoadBalancer::CanStartPath)
        .staticmethod("StaticClass")
  ;
}