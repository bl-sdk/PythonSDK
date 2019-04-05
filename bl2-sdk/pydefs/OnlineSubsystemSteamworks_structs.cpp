#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_OnlineSubsystemSteamworks_structs(py::module &m)
{
	py::class_< FServerQueryToRulesResponseMapping >(m, "FServerQueryToRulesResponseMapping")
		.def_readwrite("Query", &FServerQueryToRulesResponseMapping::Query)
		.def_readwrite("Response", &FServerQueryToRulesResponseMapping::Response, py::return_value_policy::reference)
		;
	py::class_< FServerQueryToPingResponseMapping >(m, "FServerQueryToPingResponseMapping")
		.def_readwrite("Query", &FServerQueryToPingResponseMapping::Query)
		.def_readwrite("Response", &FServerQueryToPingResponseMapping::Response, py::return_value_policy::reference)
		;
	py::class_< FClientFilterORClause >(m, "FClientFilterORClause")
		.def_readwrite("OrParams", &FClientFilterORClause::OrParams, py::return_value_policy::reference)
		;
	py::class_< FFilterKeyToSteamKeyMapping >(m, "FFilterKeyToSteamKeyMapping")
		.def_property("bReverseFilter", [](FFilterKeyToSteamKeyMapping &self){return self.bReverseFilter;}, [](FFilterKeyToSteamKeyMapping &self, bool value){self.bReverseFilter = value ? 1 : 0;})
		.def_readwrite("KeyId", &FFilterKeyToSteamKeyMapping::KeyId)
		.def_readwrite("KeyType", &FFilterKeyToSteamKeyMapping::KeyType)
		.def_readwrite("RawKey", &FFilterKeyToSteamKeyMapping::RawKey, py::return_value_policy::reference)
		.def_readwrite("SteamKey", &FFilterKeyToSteamKeyMapping::SteamKey, py::return_value_policy::reference)
		.def_readwrite("IgnoreValue", &FFilterKeyToSteamKeyMapping::IgnoreValue, py::return_value_policy::reference)
		;
	py::class_< FLeaderboardHandle >(m, "FLeaderboardHandle")
		.def_readwrite("Dud", &FLeaderboardHandle::Dud, py::return_value_policy::reference)
		;
	py::class_< FLeaderboardTemplate >(m, "FLeaderboardTemplate")
		.def_property("bLeaderboardInitializing", [](FLeaderboardTemplate &self){return self.bLeaderboardInitializing;}, [](FLeaderboardTemplate &self, bool value){self.bLeaderboardInitializing = value ? 1 : 0;})
		.def_property("bLeaderboardInitiated", [](FLeaderboardTemplate &self){return self.bLeaderboardInitiated;}, [](FLeaderboardTemplate &self, bool value){self.bLeaderboardInitiated = value ? 1 : 0;})
		.def_readwrite("LeaderboardName", &FLeaderboardTemplate::LeaderboardName, py::return_value_policy::reference)
		.def_readwrite("UpdateType", &FLeaderboardTemplate::UpdateType)
		.def_readwrite("LeaderboardSize", &FLeaderboardTemplate::LeaderboardSize)
		.def_readwrite("SortType", &FLeaderboardTemplate::SortType)
		.def_readwrite("DisplayFormat", &FLeaderboardTemplate::DisplayFormat)
		.def_readwrite("LeaderboardRef", &FLeaderboardTemplate::LeaderboardRef, py::return_value_policy::reference)
		;
	py::class_< FDeferredLeaderboardRead >(m, "FDeferredLeaderboardRead")
		.def_readwrite("LeaderboardName", &FDeferredLeaderboardRead::LeaderboardName, py::return_value_policy::reference)
		.def_readwrite("RequestType", &FDeferredLeaderboardRead::RequestType)
		.def_readwrite("Start", &FDeferredLeaderboardRead::Start)
		.def_readwrite("End", &FDeferredLeaderboardRead::End)
		;
	py::class_< FDeferredLeaderboardWrite >(m, "FDeferredLeaderboardWrite")
		.def_readwrite("LeaderboardName", &FDeferredLeaderboardWrite::LeaderboardName, py::return_value_policy::reference)
		.def_readwrite("Score", &FDeferredLeaderboardWrite::Score)
		;
	py::class_< FLeaderboardEntry >(m, "FLeaderboardEntry")
		.def_readwrite("PlayerUID", &FLeaderboardEntry::PlayerUID, py::return_value_policy::reference)
		.def_readwrite("Rank", &FLeaderboardEntry::Rank)
		.def_readwrite("Score", &FLeaderboardEntry::Score)
		;
	py::class_< FViewIdToLeaderboardName >(m, "FViewIdToLeaderboardName")
		.def_readwrite("ViewId", &FViewIdToLeaderboardName::ViewId)
		.def_readwrite("LeaderboardName", &FViewIdToLeaderboardName::LeaderboardName, py::return_value_policy::reference)
		;
	py::class_< FSteamPlayerClanData >(m, "FSteamPlayerClanData")
		.def_readwrite("ClanName", &FSteamPlayerClanData::ClanName, py::return_value_policy::reference)
		.def_readwrite("ClanTag", &FSteamPlayerClanData::ClanTag, py::return_value_policy::reference)
		;
	py::class_< FMarketplaceListCache >(m, "FMarketplaceListCache")
		.def_readwrite("Content", &FMarketplaceListCache::Content, py::return_value_policy::reference)
		.def_readwrite("ReadState", &FMarketplaceListCache::ReadState)
		.def_readwrite("ReadCompleteDelegates", &FMarketplaceListCache::ReadCompleteDelegates, py::return_value_policy::reference)
		;
	py::class_< FMarketplaceOfferData >(m, "FMarketplaceOfferData")
		.def_readwrite("OfferId", &FMarketplaceOfferData::OfferId)
		.def_readwrite("Category", &FMarketplaceOfferData::Category)
		.def_readwrite("SellTextLocKey", &FMarketplaceOfferData::SellTextLocKey, py::return_value_policy::reference)
		;
	py::class_< FProfileSettingsCache >(m, "FProfileSettingsCache")
		.def_readwrite("Profile", &FProfileSettingsCache::Profile, py::return_value_policy::reference)
		.def_readwrite("ReadDelegates", &FProfileSettingsCache::ReadDelegates, py::return_value_policy::reference)
		.def_readwrite("WriteDelegates", &FProfileSettingsCache::WriteDelegates, py::return_value_policy::reference)
		.def_readwrite("ProfileDataChangedDelegates", &FProfileSettingsCache::ProfileDataChangedDelegates, py::return_value_policy::reference)
		;
	py::class_< FDeviceIdCache >(m, "FDeviceIdCache")
		.def_readwrite("DeviceID", &FDeviceIdCache::DeviceID)
		.def_readwrite("DeviceSelectionMulticast", &FDeviceIdCache::DeviceSelectionMulticast, py::return_value_policy::reference)
		.def_readwrite("DeviceSelectionDelegates", &FDeviceIdCache::DeviceSelectionDelegates, py::return_value_policy::reference)
		;
	py::class_< FAchievementProgressStat >(m, "FAchievementProgressStat")
		.def_property("bUnlock", [](FAchievementProgressStat &self){return self.bUnlock;}, [](FAchievementProgressStat &self, bool value){self.bUnlock = value ? 1 : 0;})
		.def_readwrite("AchievementId", &FAchievementProgressStat::AchievementId)
		.def_readwrite("Progress", &FAchievementProgressStat::Progress)
		.def_readwrite("MaxProgress", &FAchievementProgressStat::MaxProgress)
		;
	py::class_< FAchievementMappingInfo >(m, "FAchievementMappingInfo")
		.def_property("bAutoUnlock", [](FAchievementMappingInfo &self){return self.bAutoUnlock;}, [](FAchievementMappingInfo &self, bool value){self.bAutoUnlock = value ? 1 : 0;})
		.def_readwrite("AchievementId", &FAchievementMappingInfo::AchievementId)
		.def_readwrite("AchievementName", &FAchievementMappingInfo::AchievementName, py::return_value_policy::reference)
		.def_readwrite("ViewId", &FAchievementMappingInfo::ViewId)
		.def_readwrite("ProgressCount", &FAchievementMappingInfo::ProgressCount)
		.def_readwrite("MaxProgress", &FAchievementMappingInfo::MaxProgress)
		;
	py::class_< FQueuedAvatarRequest >(m, "FQueuedAvatarRequest")
		.def_readwrite("CheckTime", &FQueuedAvatarRequest::CheckTime)
		.def_readwrite("NumberOfAttempts", &FQueuedAvatarRequest::NumberOfAttempts)
		.def_readwrite("PlayerNetId", &FQueuedAvatarRequest::PlayerNetId, py::return_value_policy::reference)
		.def_readwrite("Size", &FQueuedAvatarRequest::Size)
		.def_readwrite("ReadOnlineAvatarCompleteDelegate", &FQueuedAvatarRequest::ReadOnlineAvatarCompleteDelegate, py::return_value_policy::reference)
		;
	py::class_< FTitleFileMapping >(m, "FTitleFileMapping")
		.def_readwrite("Filename", &FTitleFileMapping::Filename, py::return_value_policy::reference)
		.def_readwrite("UGCHandle", &FTitleFileMapping::UGCHandle, py::return_value_policy::reference)
		;
	py::class_< FControllerConnectionState >(m, "FControllerConnectionState")
		.def_readwrite("bIsControllerConnected", &FControllerConnectionState::bIsControllerConnected)
		.def_readwrite("bLastIsControllerConnected", &FControllerConnectionState::bLastIsControllerConnected)
		;
	py::class_< FOnlineStatusContextMapping >(m, "FOnlineStatusContextMapping")
		.def_readwrite("KeyString", &FOnlineStatusContextMapping::KeyString, py::return_value_policy::reference)
		.def_readwrite("ContextId", &FOnlineStatusContextMapping::ContextId)
		;
	py::class_< FOnlineStatusPropertyMapping >(m, "FOnlineStatusPropertyMapping")
		.def_readwrite("KeyString", &FOnlineStatusPropertyMapping::KeyString, py::return_value_policy::reference)
		.def_readwrite("PropertyId", &FOnlineStatusPropertyMapping::PropertyId)
		.def_readwrite("EncodeId", &FOnlineStatusPropertyMapping::EncodeId)
		;
	py::class_< FOnlineStatusMapping >(m, "FOnlineStatusMapping")
		.def_readwrite("StatusId", &FOnlineStatusMapping::StatusId)
		.def_readwrite("StatusString", &FOnlineStatusMapping::StatusString, py::return_value_policy::reference)
		;
	py::class_< FPropertyToColumn >(m, "FPropertyToColumn")
		.def_readwrite("PropertyId", &FPropertyToColumn::PropertyId)
		.def_readwrite("ColumnId", &FPropertyToColumn::ColumnId)
		;
	py::class_< FPlayerStat >(m, "FPlayerStat")
		.def_readwrite("ViewId", &FPlayerStat::ViewId)
		.def_readwrite("PropertyId", &FPlayerStat::PropertyId)
		.def_readwrite("Data", &FPlayerStat::Data, py::return_value_policy::reference)
		;
	py::class_< FPendingPlayerStats >(m, "FPendingPlayerStats")
		.def_readwrite("Player", &FPendingPlayerStats::Player, py::return_value_policy::reference)
		.def_readwrite("PlayerName", &FPendingPlayerStats::PlayerName, py::return_value_policy::reference)
		.def_readwrite("StatGuid", &FPendingPlayerStats::StatGuid, py::return_value_policy::reference)
		.def_readwrite("Stats", &FPendingPlayerStats::Stats, py::return_value_policy::reference)
		.def_readwrite("Score", &FPendingPlayerStats::Score, py::return_value_policy::reference)
		.def_readwrite("Place", &FPendingPlayerStats::Place, py::return_value_policy::reference)
		;
	py::class_< FListenEntry >(m, "FListenEntry")
		.def_readwrite("RemoteId", &FListenEntry::RemoteId, py::return_value_policy::reference)
		.def_readwrite("Status", &FListenEntry::Status)
		.def_readwrite("ActiveTimestamp", &FListenEntry::ActiveTimestamp, py::return_value_policy::reference)
		;
	py::class_< FQoSResults >(m, "FQoSResults")
		.def_readwrite("PingTimes", &FQoSResults::PingTimes, py::return_value_policy::reference)
		.def_readwrite("PingInMs", &FQoSResults::PingInMs)
		;
	py::class_< FRequestEntry >(m, "FRequestEntry")
		.def_readwrite("RemoteId", &FRequestEntry::RemoteId, py::return_value_policy::reference)
		.def_readwrite("NumProbesSent", &FRequestEntry::NumProbesSent)
		.def_readwrite("ChallengeTimestamp", &FRequestEntry::ChallengeTimestamp, py::return_value_policy::reference)
		.def_readwrite("PingTimestamp", &FRequestEntry::PingTimestamp, py::return_value_policy::reference)
		.def_readwrite("Status", &FRequestEntry::Status)
		.def_readwrite("Results", &FRequestEntry::Results, py::return_value_policy::reference)
		.def_readwrite("CallbackFunc", &FRequestEntry::CallbackFunc, py::return_value_policy::reference)
		.def_readwrite("UserData", &FRequestEntry::UserData, py::return_value_policy::reference)
		;
	py::class_< FPendingEntry >(m, "FPendingEntry")
		.def_readwrite("RemoteId", &FPendingEntry::RemoteId, py::return_value_policy::reference)
		.def_readwrite("CallbackFunc", &FPendingEntry::CallbackFunc, py::return_value_policy::reference)
		.def_readwrite("UserData", &FPendingEntry::UserData, py::return_value_policy::reference)
		;

}