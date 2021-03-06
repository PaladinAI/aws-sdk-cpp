﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/ReplicationRuleFilter.h>
#include <aws/s3/model/ReplicationRuleStatus.h>
#include <aws/s3/model/SourceSelectionCriteria.h>
#include <aws/s3/model/Destination.h>
#include <aws/s3/model/DeleteMarkerReplication.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>Container for information about a particular replication rule.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ReplicationRule">AWS
   * API Reference</a></p>
   */
  class AWS_S3_API ReplicationRule
  {
  public:
    ReplicationRule();
    ReplicationRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReplicationRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Unique identifier for the rule. The value cannot be longer than 255
     * characters.</p>
     */
    inline const Aws::String& GetID() const{ return m_iD; }

    /**
     * <p>Unique identifier for the rule. The value cannot be longer than 255
     * characters.</p>
     */
    inline void SetID(const Aws::String& value) { m_iDHasBeenSet = true; m_iD = value; }

    /**
     * <p>Unique identifier for the rule. The value cannot be longer than 255
     * characters.</p>
     */
    inline void SetID(Aws::String&& value) { m_iDHasBeenSet = true; m_iD = std::move(value); }

    /**
     * <p>Unique identifier for the rule. The value cannot be longer than 255
     * characters.</p>
     */
    inline void SetID(const char* value) { m_iDHasBeenSet = true; m_iD.assign(value); }

    /**
     * <p>Unique identifier for the rule. The value cannot be longer than 255
     * characters.</p>
     */
    inline ReplicationRule& WithID(const Aws::String& value) { SetID(value); return *this;}

    /**
     * <p>Unique identifier for the rule. The value cannot be longer than 255
     * characters.</p>
     */
    inline ReplicationRule& WithID(Aws::String&& value) { SetID(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the rule. The value cannot be longer than 255
     * characters.</p>
     */
    inline ReplicationRule& WithID(const char* value) { SetID(value); return *this;}


    /**
     * <p>The priority associated with the rule. If you specify multiple rules in a
     * replication configuration, then Amazon S3 applies rule priority in the event
     * there are conflicts (two or more rules identify the same object based on filter
     * specified). The rule with higher priority takes precedence. For example,</p>
     * <ul> <li> <p>Same object quality prefix based filter criteria If prefixes you
     * specified in multiple rules overlap. </p> </li> <li> <p>Same object qualify tag
     * based filter criteria specified in multiple rules</p> </li> </ul> <p>For more
     * information, see <a href="
     * https://docs.aws.amazon.com/AmazonS3/latest/dev/crr.html">Cross-Region
     * Replication (CRR)</a> in the Amazon S3 Developer Guide.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority associated with the rule. If you specify multiple rules in a
     * replication configuration, then Amazon S3 applies rule priority in the event
     * there are conflicts (two or more rules identify the same object based on filter
     * specified). The rule with higher priority takes precedence. For example,</p>
     * <ul> <li> <p>Same object quality prefix based filter criteria If prefixes you
     * specified in multiple rules overlap. </p> </li> <li> <p>Same object qualify tag
     * based filter criteria specified in multiple rules</p> </li> </ul> <p>For more
     * information, see <a href="
     * https://docs.aws.amazon.com/AmazonS3/latest/dev/crr.html">Cross-Region
     * Replication (CRR)</a> in the Amazon S3 Developer Guide.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority associated with the rule. If you specify multiple rules in a
     * replication configuration, then Amazon S3 applies rule priority in the event
     * there are conflicts (two or more rules identify the same object based on filter
     * specified). The rule with higher priority takes precedence. For example,</p>
     * <ul> <li> <p>Same object quality prefix based filter criteria If prefixes you
     * specified in multiple rules overlap. </p> </li> <li> <p>Same object qualify tag
     * based filter criteria specified in multiple rules</p> </li> </ul> <p>For more
     * information, see <a href="
     * https://docs.aws.amazon.com/AmazonS3/latest/dev/crr.html">Cross-Region
     * Replication (CRR)</a> in the Amazon S3 Developer Guide.</p>
     */
    inline ReplicationRule& WithPriority(int value) { SetPriority(value); return *this;}


    
    inline const ReplicationRuleFilter& GetFilter() const{ return m_filter; }

    
    inline void SetFilter(const ReplicationRuleFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    
    inline void SetFilter(ReplicationRuleFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    
    inline ReplicationRule& WithFilter(const ReplicationRuleFilter& value) { SetFilter(value); return *this;}

    
    inline ReplicationRule& WithFilter(ReplicationRuleFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The rule is ignored if status is not Enabled.</p>
     */
    inline const ReplicationRuleStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The rule is ignored if status is not Enabled.</p>
     */
    inline void SetStatus(const ReplicationRuleStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The rule is ignored if status is not Enabled.</p>
     */
    inline void SetStatus(ReplicationRuleStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The rule is ignored if status is not Enabled.</p>
     */
    inline ReplicationRule& WithStatus(const ReplicationRuleStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The rule is ignored if status is not Enabled.</p>
     */
    inline ReplicationRule& WithStatus(ReplicationRuleStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> Container that describes additional filters in identifying source objects
     * that you want to replicate. Currently, Amazon S3 supports only the filter that
     * you can specify for objects created with server-side encryption using an AWS
     * KMS-managed key. You can choose to enable or disable replication of these
     * objects. </p> <p> if you want Amazon S3 to replicate objects created with
     * server-side encryption using AWS KMS-managed keys. </p>
     */
    inline const SourceSelectionCriteria& GetSourceSelectionCriteria() const{ return m_sourceSelectionCriteria; }

    /**
     * <p> Container that describes additional filters in identifying source objects
     * that you want to replicate. Currently, Amazon S3 supports only the filter that
     * you can specify for objects created with server-side encryption using an AWS
     * KMS-managed key. You can choose to enable or disable replication of these
     * objects. </p> <p> if you want Amazon S3 to replicate objects created with
     * server-side encryption using AWS KMS-managed keys. </p>
     */
    inline void SetSourceSelectionCriteria(const SourceSelectionCriteria& value) { m_sourceSelectionCriteriaHasBeenSet = true; m_sourceSelectionCriteria = value; }

    /**
     * <p> Container that describes additional filters in identifying source objects
     * that you want to replicate. Currently, Amazon S3 supports only the filter that
     * you can specify for objects created with server-side encryption using an AWS
     * KMS-managed key. You can choose to enable or disable replication of these
     * objects. </p> <p> if you want Amazon S3 to replicate objects created with
     * server-side encryption using AWS KMS-managed keys. </p>
     */
    inline void SetSourceSelectionCriteria(SourceSelectionCriteria&& value) { m_sourceSelectionCriteriaHasBeenSet = true; m_sourceSelectionCriteria = std::move(value); }

    /**
     * <p> Container that describes additional filters in identifying source objects
     * that you want to replicate. Currently, Amazon S3 supports only the filter that
     * you can specify for objects created with server-side encryption using an AWS
     * KMS-managed key. You can choose to enable or disable replication of these
     * objects. </p> <p> if you want Amazon S3 to replicate objects created with
     * server-side encryption using AWS KMS-managed keys. </p>
     */
    inline ReplicationRule& WithSourceSelectionCriteria(const SourceSelectionCriteria& value) { SetSourceSelectionCriteria(value); return *this;}

    /**
     * <p> Container that describes additional filters in identifying source objects
     * that you want to replicate. Currently, Amazon S3 supports only the filter that
     * you can specify for objects created with server-side encryption using an AWS
     * KMS-managed key. You can choose to enable or disable replication of these
     * objects. </p> <p> if you want Amazon S3 to replicate objects created with
     * server-side encryption using AWS KMS-managed keys. </p>
     */
    inline ReplicationRule& WithSourceSelectionCriteria(SourceSelectionCriteria&& value) { SetSourceSelectionCriteria(std::move(value)); return *this;}


    /**
     * <p>Container for replication destination information.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }

    /**
     * <p>Container for replication destination information.</p>
     */
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>Container for replication destination information.</p>
     */
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>Container for replication destination information.</p>
     */
    inline ReplicationRule& WithDestination(const Destination& value) { SetDestination(value); return *this;}

    /**
     * <p>Container for replication destination information.</p>
     */
    inline ReplicationRule& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}


    
    inline const DeleteMarkerReplication& GetDeleteMarkerReplication() const{ return m_deleteMarkerReplication; }

    
    inline void SetDeleteMarkerReplication(const DeleteMarkerReplication& value) { m_deleteMarkerReplicationHasBeenSet = true; m_deleteMarkerReplication = value; }

    
    inline void SetDeleteMarkerReplication(DeleteMarkerReplication&& value) { m_deleteMarkerReplicationHasBeenSet = true; m_deleteMarkerReplication = std::move(value); }

    
    inline ReplicationRule& WithDeleteMarkerReplication(const DeleteMarkerReplication& value) { SetDeleteMarkerReplication(value); return *this;}

    
    inline ReplicationRule& WithDeleteMarkerReplication(DeleteMarkerReplication&& value) { SetDeleteMarkerReplication(std::move(value)); return *this;}

  private:

    Aws::String m_iD;
    bool m_iDHasBeenSet;

    int m_priority;
    bool m_priorityHasBeenSet;

    ReplicationRuleFilter m_filter;
    bool m_filterHasBeenSet;

    ReplicationRuleStatus m_status;
    bool m_statusHasBeenSet;

    SourceSelectionCriteria m_sourceSelectionCriteria;
    bool m_sourceSelectionCriteriaHasBeenSet;

    Destination m_destination;
    bool m_destinationHasBeenSet;

    DeleteMarkerReplication m_deleteMarkerReplication;
    bool m_deleteMarkerReplicationHasBeenSet;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
