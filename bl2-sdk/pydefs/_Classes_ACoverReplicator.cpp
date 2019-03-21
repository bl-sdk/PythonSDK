#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ACoverReplicator()
{
    class_< ACoverReplicator, bases< AReplicationInfo >  , boost::noncopyable>("ACoverReplicator", no_init)
        .def_readwrite("CoverReplicationData", &ACoverReplicator::CoverReplicationData)
        .def("StaticClass", &ACoverReplicator::StaticClass, return_value_policy< reference_existing_object >())
        .def("ClientReceiveLinkDisabledState", &ACoverReplicator::ClientReceiveLinkDisabledState)
        .def("ServerSendLinkDisabledState", &ACoverReplicator::ServerSendLinkDisabledState)
        .def("NotifyLinkDisabledStateChange", &ACoverReplicator::NotifyLinkDisabledStateChange)
        .def("ClientReceiveManualCoverTypeSlots", &ACoverReplicator::ClientReceiveManualCoverTypeSlots)
        .def("ServerSendManualCoverTypeSlots", &ACoverReplicator::ServerSendManualCoverTypeSlots)
        .def("NotifySetManualCoverTypeForSlots", &ACoverReplicator::NotifySetManualCoverTypeForSlots)
        .def("ClientReceiveAdjustedSlots", &ACoverReplicator::ClientReceiveAdjustedSlots)
        .def("ServerSendAdjustedSlots", &ACoverReplicator::ServerSendAdjustedSlots)
        .def("NotifyAutoAdjustSlots", &ACoverReplicator::NotifyAutoAdjustSlots)
        .def("ClientReceiveDisabledSlots", &ACoverReplicator::ClientReceiveDisabledSlots)
        .def("ServerSendDisabledSlots", &ACoverReplicator::ServerSendDisabledSlots)
        .def("NotifyDisabledSlots", &ACoverReplicator::NotifyDisabledSlots)
        .def("ClientReceiveEnabledSlots", &ACoverReplicator::ClientReceiveEnabledSlots)
        .def("ServerSendEnabledSlots", &ACoverReplicator::ServerSendEnabledSlots)
        .def("NotifyEnabledSlots", &ACoverReplicator::NotifyEnabledSlots)
        .def("ClientReceiveInitialCoverReplicationInfo", &ACoverReplicator::ClientReceiveInitialCoverReplicationInfo)
        .def("ServerSendInitialCoverReplicationInfo", &ACoverReplicator::ServerSendInitialCoverReplicationInfo)
        .def("ClientSetOwner", &ACoverReplicator::ClientSetOwner)
        .def("ReplicateInitialCoverInfo", &ACoverReplicator::ReplicateInitialCoverInfo)
        .def("PurgeOldEntries", &ACoverReplicator::PurgeOldEntries)
        .staticmethod("StaticClass")
  ;
}